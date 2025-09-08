# 📘 Clack v0.3 – Complete Contribution Guide  

Welcome to **Clack v0.3**! 🎉  
This guide will walk you step by step through the process of contributing, even if it’s your first time contributing to open source.  

---

## ⚙️ 1. Getting Started  

### 1.1 Prerequisites  
Before contributing, make sure you have:  
- Git installed  
- GCC/Clang or another C++ compiler  
- Make (for building the project)  
- A GitHub account  

---

## 🌱 Fork & Clone  

1. Go to the [Clack v0.3 repo](https://github.com/clack-v0.3.git) and click **Fork** (top right).  
2. Clone your fork:  
   ```bash
   git clone https://github.com/<your-username>/clack-v0.3.git
   cd clack-v0.3
3. Add the original repo as upstream (to keep your fork updated):
   git remote add upstream https://github.com/username/clack-v0.3.git

---

## 🏗️ Build the Project

1. Compile Clack v0.3:
   ```bash
   make
   ./clack


2. Test with a simple command:
   ```bash
   ./clack 2 + 2
If this works, you’re ready to contribute 🚀.

---
## 🌿 Create a New Branch
     
- Always create a branch before making changes:
   ```bash
   git checkout -b feature-xyz

- Examples:
  - fix-division-bug
  - feat-add-power-operator
  - docs-update-readme

---

## ✍️ Make Your Changes

- Edit the code or documentation as needed.   
  - Follow the coding style:
     - C++11/14 standard
     - Indentation: 4 spaces
     - Clear names & meaningful comments

---

## 💬 Commit Your Changes
- We follow Conventional Commits.
   - Format:
     ```bash
     <type>(optional scope): <short description>
   - Examples:
        ```bash
      - git commit -m "feat(calc): add average and min/max operations"
      - git commit -m "fix(input): handle division by zero"
      - git commit -m "docs: update README with usage examples"
    
---

## 🔄 Sync with Upstream

- Before pushing, make sure your fork is up-to-date:
  ```bash
   - git fetch upstream
   - git merge upstream/main
Resolve conflicts if any.

---

## ☁️ Push to Your Fork
    git push origin feature-xyz

---

## 🔀 Open a Pull Request

1. Go to your fork on GitHub.
2. Click Compare & pull request.
   - Select:
     1. Base repo: username/clack-v0.3
     2. Base branch: main
     3. Compare branch: feature-xyz
- Fill out the PR template with:
   1. Clear title
   2. Description of changes
   3. Screenshots/logs if relevant
Submit ✅

---

## ✅ Pull Request Checklist
 
     - Code compiles with no errors
     - No existing functionality is broken
     - Tests added or updated (if applicable)
     - Documentation updated
     - Commit messages follow convention
