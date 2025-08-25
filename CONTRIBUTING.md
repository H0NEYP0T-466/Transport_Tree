# 🤝 Contributing to Transport Tree

Thank you for your interest in contributing to Transport Tree! We welcome contributions from the community and are grateful for any help you can provide.

## 📋 Table of Contents

- [🤝 Contributing to Transport Tree](#-contributing-to-transport-tree)
  - [📋 Table of Contents](#-table-of-contents)
  - [🚀 Getting Started](#-getting-started)
  - [🍴 How to Fork and Contribute](#-how-to-fork-and-contribute)
  - [💻 Code Style Guidelines](#-code-style-guidelines)
  - [🧪 Testing Requirements](#-testing-requirements)
  - [📝 Documentation Guidelines](#-documentation-guidelines)
  - [🐛 Bug Reports](#-bug-reports)
  - [💡 Feature Requests](#-feature-requests)
  - [🔍 Code Review Process](#-code-review-process)
  - [📞 Getting Help](#-getting-help)

## 🚀 Getting Started

### Prerequisites
- **C++ Compiler**: GCC 7.0+, Clang 6.0+, or MSVC 2017+
- **Git**: For version control
- **Text Editor/IDE**: Visual Studio Code, CLion, Code::Blocks, or similar

### Development Environment Setup
1. Ensure you have a compatible C++ compiler installed
2. Install Git if not already available
3. Set up your preferred IDE/editor with C++ support

## 🍴 How to Fork and Contribute

### Step 1: Fork the Repository
1. Navigate to the [Transport Tree repository](https://github.com/H0NEYP0T-466/Transport_Tree)
2. Click the **"Fork"** button in the top-right corner
3. This creates a copy of the repository in your GitHub account

### Step 2: Clone Your Fork
```bash
git clone https://github.com/YOUR_USERNAME/Transport_Tree.git
cd Transport_Tree
```

### Step 3: Create a Feature Branch
```bash
git checkout -b feature/your-feature-name
# or
git checkout -b bugfix/your-bugfix-name
```

### Step 4: Make Your Changes
- Follow our [code style guidelines](#-code-style-guidelines)
- Add comments for complex logic
- Test your changes thoroughly
- Update documentation if necessary

### Step 5: Commit Your Changes
```bash
git add .
git commit -m "type: brief description of changes

Detailed explanation of what was changed and why.
Include any breaking changes or important notes.

Fixes #issue_number (if applicable)"
```

**Commit Message Format:**
- `feat:` - New features
- `fix:` - Bug fixes
- `docs:` - Documentation updates
- `style:` - Code style changes (formatting, etc.)
- `refactor:` - Code refactoring
- `test:` - Adding or updating tests
- `chore:` - Maintenance tasks

### Step 6: Push to Your Fork
```bash
git push origin feature/your-feature-name
```

### Step 7: Create a Pull Request
1. Go to your fork on GitHub
2. Click **"New Pull Request"**
3. Select the base repository: `H0NEYP0T-466/Transport_Tree`
4. Select your feature branch
5. Fill out the PR template with:
   - Clear title and description
   - What changes were made and why
   - Any related issues
   - Screenshots (if applicable)

## 💻 Code Style Guidelines

### C++ Coding Standards
- **Indentation**: Use 4 spaces (no tabs)
- **Naming Conventions**:
  - Classes: `PascalCase` (e.g., `MetroBus`)
  - Functions/Methods: `snake_case` (e.g., `display_info`)
  - Variables: `snake_case` (e.g., `station_count`)
  - Constants: `UPPER_SNAKE_CASE` (e.g., `MAX_STATIONS`)
- **Braces**: Opening brace on same line
  ```cpp
  if (condition) {
      // code here
  }
  ```

### Code Quality Standards
- **Comments**: Add meaningful comments for complex logic
- **Functions**: Keep functions focused and under 50 lines when possible
- **Error Handling**: Always handle file operations and user input errors
- **Memory Management**: Use RAII principles and avoid memory leaks

### Example Code Style
```cpp
class MetroBus {
private:
    string station_name;
    int passenger_count;
    
public:
    // Constructor with initialization list
    MetroBus(const string& name, int count) 
        : station_name(name), passenger_count(count) {}
    
    // Clear function purpose and error handling
    bool load_station_data(const string& file_path) {
        ifstream file(file_path);
        if (!file.is_open()) {
            cerr << "Error: Could not open file " << file_path << endl;
            return false;
        }
        
        // Process file data...
        return true;
    }
};
```

## 🧪 Testing Requirements

### Manual Testing
Since this project doesn't have automated tests yet, please:

1. **Compile and Run**: Ensure your changes compile without warnings
   ```bash
   g++ -std=c++11 -Wall -Wextra -o transport_tree sem2.cpp
   ./transport_tree
   ```

2. **Test All Features**: Verify that:
   - All menu options work correctly
   - File I/O operations succeed
   - Error handling works as expected
   - No memory leaks or crashes occur

3. **Cross-Platform Testing**: If possible, test on multiple operating systems

### Future Testing Goals
- Unit testing framework implementation
- Automated CI/CD pipeline
- Code coverage reporting

## 📝 Documentation Guidelines

### Code Documentation
- Add inline comments for complex algorithms
- Document all public class methods
- Explain any non-obvious business logic

### README Updates
When making changes that affect:
- Installation process
- Usage instructions
- New features
- Dependencies

Please update the relevant sections in `README.md`

### Commit Documentation
- Write clear commit messages
- Reference issue numbers when applicable
- Explain the "why" not just the "what"

## 🐛 Bug Reports

When reporting bugs, please include:

### Required Information
- **Operating System**: (e.g., Windows 10, Ubuntu 20.04, macOS Big Sur)
- **Compiler**: (e.g., GCC 9.3.0, Clang 12.0.0, MSVC 2019)
- **C++ Standard**: (e.g., C++11, C++14, C++17)

### Bug Report Template
```markdown
**Bug Description**
A clear description of what the bug is.

**Steps to Reproduce**
1. Go to '...'
2. Click on '....'
3. Enter data '....'
4. See error

**Expected Behavior**
What you expected to happen.

**Actual Behavior**
What actually happened.

**Screenshots**
If applicable, add screenshots to help explain your problem.

**Additional Context**
Any other context about the problem here.
```

## 💡 Feature Requests

### Before Submitting
- Check if the feature already exists
- Search existing issues for similar requests
- Consider if the feature fits the project scope

### Feature Request Template
```markdown
**Feature Description**
A clear description of what you want to happen.

**Problem It Solves**
Explain the problem this feature would solve.

**Proposed Solution**
Describe how you envision this feature working.

**Alternatives Considered**
Alternative solutions or features you've considered.

**Additional Context**
Any other context, mockups, or examples.
```

## 🔍 Code Review Process

### What We Look For
- **Code Quality**: Clean, readable, and maintainable code
- **Functionality**: Code works as intended and doesn't break existing features
- **Documentation**: Appropriate comments and documentation updates
- **Style**: Follows project coding standards

### Review Timeline
- Initial review within 48-72 hours
- Follow-up reviews within 24 hours
- Approval and merge when all requirements are met

### Addressing Review Comments
- Be responsive to feedback
- Ask questions if feedback is unclear
- Make requested changes promptly
- Update your PR description if scope changes

## 📞 Getting Help

### Community Support
- **GitHub Issues**: For bug reports and feature requests
- **Discussions**: For questions and general discussion
- **Email**: Contact project maintainers directly

### Resources
- [C++ Reference](https://en.cppreference.com/)
- [Git Documentation](https://git-scm.com/doc)
- [GitHub Flow Guide](https://guides.github.com/introduction/flow/)

---

<div align="center">

**Thank you for contributing to Transport Tree! 🚌✨**

Every contribution, no matter how small, helps make this project better.

</div>