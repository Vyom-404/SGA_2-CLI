# Question 5 – Recovery Mechanisms in vi Editor

## Objective

Evaluate the recovery mechanisms provided by the **vi** editor when a system crashes before a file is saved. Compare swap files, undo history, registers, backup files, and auto-recovery, then recommend the most reliable recovery strategy.

---

## 1. Swap Files (.swp)

- vi automatically creates a swap file while editing.
- The swap file stores unsaved changes.
- If the system crashes, the file can usually be recovered using:

```bash
vim -r filename
```

### Advantages
- Recovers most unsaved work.
- Automatically created.

### Limitations
- Recovery may not be complete if the swap file is corrupted.

---

## 2. Undo History

- vi maintains an undo history during the editing session.
- Users can undo recent changes using:

```bash
u
```

### Advantages
- Quickly reverses mistakes.

### Limitations
- Usually unavailable after an unexpected crash unless persistent undo is enabled.

---

## 3. Registers

- vi stores deleted and copied text in registers.

Examples:

```bash
"ayy
"ap
```

### Advantages
- Useful for recovering deleted or copied text.

### Limitations
- Registers do not recover an entire crashed editing session.

---

## 4. Backup Files

If backup is enabled:

```vim
:set backup
```

vi creates a backup copy before saving changes.

### Advantages
- Protects the previously saved version.

### Limitations
- Does not contain the latest unsaved edits.

---

## 5. Auto-Recovery

When vi detects a swap file after a crash, it usually displays a recovery prompt.

Recovery can also be started manually:

```bash
vim -r filename
```

---

## Comparison

| Recovery Method | Recovers Unsaved Changes | Best Use |
|-----------------|--------------------------|----------|
| Swap File | Yes | Crash recovery |
| Undo History | During editing session | Correcting mistakes |
| Registers | Partial | Recover copied/deleted text |
| Backup Files | Previous saved version | Restore older version |
| Auto-Recovery | Yes | Recover after unexpected shutdown |

---

## Recommended Recovery Strategy

The most reliable recovery mechanism is the **swap file with auto-recovery**.

Reason:
- It is created automatically while editing.
- It preserves most unsaved work.
- It works even after an unexpected system crash.
- Recovery is straightforward using:

```bash
vim -r filename
```

---

## Conclusion

The vi editor provides several recovery mechanisms, but the combination of **swap files and auto-recovery** offers the best protection against data loss after a system crash. Backup files, undo history, and registers are also useful, but they serve different purposes and cannot completely replace swap-file recovery.k
