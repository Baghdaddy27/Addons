To create a symbolic link (symlink) in Linux, use the **`ln`** command with the **`-s`** (symbolic) flag.

---

## Basic Syntax

bash
ln -s <target_path> <symlink_name>


* **`<target_path>`**: The actual file or directory you want to point *to*.
* **`<symlink_name>`**: The name (and path) of the shortcut link you want to create.

---

## Common Examples

### 1. Linking a Directory

To create a symlink named `my_link` that points to a target directory:

bash
ln -s /path/to/real_directory /path/to/my_link


### 2. Linking a File

To create a symlink for a specific file:

bash
ln -s /path/to/real_file.txt /path/to/shortcut.txt


### 3. Creating a Symlink in the Current Directory

If you are already inside the directory where you want the shortcut to appear, omit the destination path for the link name:

bash
ln -s /home/jordan/Documents/real_folder my_shortcut


---

## Best Practices

* **Use Absolute Paths:** It is safest to use full absolute paths (starting with `/home/...` or `/`) for both the target and the link to prevent breaking if referenced elsewhere.
* **Avoid Trailing Slashes:** When linking directories, avoid putting a slash at the end of the target path (e.g., use `/path/to/folder` instead of `/path/to/folder/`).

---

## How to Verify a Symlink

To check where a symlink is pointing, use `ls -l`:

bash
ls -l my_shortcut


You will see an arrow (`->`) pointing from the symlink to its target destination.