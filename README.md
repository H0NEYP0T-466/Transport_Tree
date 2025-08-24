# 🚌 Transport Tree

![GitHub License](https://img.shields.io/github/license/H0NEYP0T-466/Transport_Tree?style=flat-square)
![GitHub Stars](https://img.shields.io/github/stars/H0NEYP0T-466/Transport_Tree?style=flat-square)
![GitHub Forks](https://img.shields.io/github/forks/H0NEYP0T-466/Transport_Tree?style=flat-square)
![GitHub Issues](https://img.shields.io/github/issues/H0NEYP0T-466/Transport_Tree?style=flat-square)
![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat-square)

## 📋 Description

**Transport Tree** is a comprehensive C++ application that simulates a multi-modal public transportation management system. The project implements an object-oriented design to manage three types of urban transport services: Metro Bus, Speedo Bus, and Orange Train. This system provides functionality for route management, ticket generation, station information display, and personalized favorite route tracking.

The application demonstrates advanced C++ concepts including inheritance, file I/O operations, and interactive console-based user interfaces, making it an excellent educational project for understanding transport system architecture and object-oriented programming principles.

## 📚 Table of Contents

- [🚌 Transport Tree](#-transport-tree)
  - [📋 Description](#-description)
  - [📚 Table of Contents](#-table-of-contents)
  - [🚀 Installation](#-installation)
  - [💻 Usage](#-usage)
  - [✨ Features](#-features)
  - [📁 Folder Structure](#-folder-structure)
  - [🤝 Contributing](#-contributing)
  - [📄 License](#-license)
  - [🗺️ Roadmap](#️-roadmap)
  - [🙏 Acknowledgements](#-acknowledgements)

## 🚀 Installation

### Prerequisites
- **C++ Compiler**: GCC, Clang, or MSVC with C++11 or later support
- **Operating System**: Windows, Linux, or macOS
- **Optional**: IDE like Code::Blocks, Dev-C++, or Visual Studio

### Quick Start

1. **Clone the repository:**
   ```bash
   git clone https://github.com/H0NEYP0T-466/Transport_Tree.git
   cd Transport_Tree
   ```

2. **Compile the application:**
   ```bash
   # Using GCC
   g++ -o transport_tree sem2.cpp -std=c++11
   
   # Using Clang
   clang++ -o transport_tree sem2.cpp -std=c++11
   
   # Using MSVC (Windows)
   cl /EHsc sem2.cpp /Fe:transport_tree.exe
   ```

3. **Run the application:**
   ```bash
   # Linux/macOS
   ./transport_tree
   
   # Windows
   transport_tree.exe
   ```

### Alternative Installation Methods

#### Using Make (if Makefile is available)
```bash
make
make run
```

#### Using CMake (for advanced users)
```bash
mkdir build && cd build
cmake ..
make
```

## 💻 Usage

### Basic Operation

1. **Launch the application:**
   ```bash
   ./transport_tree
   ```

2. **Navigate the main menu:**
   - Select transport type (Metro Bus, Speedo Bus, or Orange Train)
   - Choose from available operations:
     - View transport information and schedules
     - Display station routes and maps
     - Generate tickets for journeys
     - Manage favorite routes
     - Access historical journey data

### Example Workflows

#### 🎫 Generating a Ticket
```
1. Select transport type → "1" (Metro Bus)
2. Choose "Generate Ticket" option
3. Select departure and destination stations
4. Confirm journey details and fare
5. Receive digital ticket with journey information
```

#### ⭐ Managing Favorite Routes
```
1. Navigate to any transport system
2. Select "Add to Favorites" option
3. Choose your preferred route
4. Access "View Favorites" to see saved routes
5. Remove routes using "Delete from Favorites"
```

#### 📊 Viewing Transport Information
```
Metro Bus Information:
├── Total Buses: 150 Buses
├── Total Stations: 27 Stations  
├── Operating Hours: 6:00 AM - 11:00 PM
├── Headway Time: 3-5 minutes
└── Base Fare: 20 PKR
```

### Command Line Arguments (if implemented)
```bash
./transport_tree --help                    # Display help information
./transport_tree --version                 # Show version information
./transport_tree --config <config_file>    # Use custom configuration
```

## ✨ Features

### 🚌 Multi-Modal Transport Support
- **Metro Bus System**: Complete urban bus network management
- **Speedo Bus Service**: High-frequency express bus routes
- **Orange Train Line**: Modern rail transit system

### 🎯 Core Functionality
- **📍 Route Management**: Comprehensive station and route information
- **🎫 Smart Ticketing**: Automated fare calculation and ticket generation
- **⭐ Personalization**: Favorite routes and personalized journey history
- **📱 Interactive Interface**: User-friendly console-based navigation
- **💾 Data Persistence**: File-based storage for routes, stations, and user preferences

### 🛠️ Technical Features
- **Object-Oriented Design**: Clean inheritance hierarchy with base `metro_bus` class
- **File I/O Operations**: Robust data management and persistence
- **Error Handling**: Comprehensive input validation and error recovery
- **Cross-Platform**: Compatible with Windows, Linux, and macOS
- **Extensible Architecture**: Easy to add new transport types and features

### 🔧 Advanced Capabilities
- **Schedule Management**: Real-time departure and arrival information
- **Fare Calculation**: Dynamic pricing based on distance and service type
- **Station Lookup**: Quick search and information retrieval
- **Journey Planning**: Route optimization and alternative suggestions
- **User Profiles**: Personalized settings and journey history

## 📁 Folder Structure

```
Transport_Tree/
├── 📄 README.md                    # Project documentation
├── 🔧 sem2.cpp                     # Main C++ source file
├── 📦 files.rar                    # Compressed data files (stations, routes)
├── 📊 oop_pres.pptx               # Project presentation
├── 📁 .git/                       # Git version control
│   ├── hooks/
│   ├── info/
│   ├── logs/
│   ├── objects/
│   └── refs/
└── 📄 LICENSE                     # MIT License (auto-generated)
```

### Expected Data File Structure (from files.rar)
```
data/
├── 🚌 metro_stations.txt          # Metro bus station information
├── 🚌 speedo_bus.txt             # Speedo bus routes and schedules  
├── 🚇 orange_train.txt           # Orange train line details
├── 🎫 serial_numbero.txt         # Ticket serial number tracking
└── ⭐ favorites/                  # User favorite routes storage
    ├── sfav/                     # Speedo bus favorites
    └── mfav/                     # Metro bus favorites
```

## 🤝 Contributing

We welcome contributions from the community! Here's how you can help improve Transport Tree:

### 🐛 Reporting Issues
- Check existing issues before creating new ones
- Use clear, descriptive titles
- Include steps to reproduce the problem
- Provide system information (OS, compiler version)

### 💡 Suggesting Enhancements
- Open an issue with the "enhancement" label
- Describe the feature and its benefits
- Include mockups or examples if applicable

### 🔧 Contributing Code

1. **Fork the repository**
   ```bash
   git fork https://github.com/H0NEYP0T-466/Transport_Tree.git
   ```

2. **Create a feature branch**
   ```bash
   git checkout -b feature/amazing-feature
   ```

3. **Make your changes**
   - Follow existing code style and conventions
   - Add comments for complex logic
   - Test your changes thoroughly

4. **Commit your changes**
   ```bash
   git commit -m "Add amazing feature: detailed description"
   ```

5. **Push to your branch**
   ```bash
   git push origin feature/amazing-feature
   ```

6. **Open a Pull Request**
   - Use a clear, descriptive title
   - Explain what changes you made and why
   - Reference any related issues

### 📝 Development Guidelines
- **Code Style**: Follow C++ best practices and existing project conventions
- **Testing**: Ensure your changes don't break existing functionality
- **Documentation**: Update README and comments as needed
- **Commits**: Use clear, descriptive commit messages

### 🏆 Contributors
Thanks to all contributors who have helped improve this project:
- **M. Fezan** (466) - Core developer and project lead
- **Umer Malik** (628) - Co-developer and feature implementation

## 📄 License

This project is licensed under the **MIT License** - see the details below:

```
MIT License

Copyright (c) 2024 Transport Tree Contributors

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## 🗺️ Roadmap

### 🔄 Version 2.0 (Planned)
- [ ] **GUI Interface**: Modern graphical user interface using Qt or similar
- [ ] **Database Integration**: Replace file-based storage with SQLite/MySQL
- [ ] **Real-time Updates**: Live schedule and delay information
- [ ] **Mobile App**: Cross-platform mobile application
- [ ] **API Development**: RESTful API for third-party integrations

### 🚀 Future Enhancements
- [ ] **GPS Integration**: Real-time vehicle tracking
- [ ] **Payment Gateway**: Digital payment and mobile wallet support
- [ ] **Multi-language**: Support for multiple languages
- [ ] **Analytics Dashboard**: Usage statistics and reporting
- [ ] **Route Optimization**: AI-powered route suggestions
- [ ] **Accessibility**: Enhanced support for users with disabilities

### 🔧 Technical Improvements
- [ ] **Code Refactoring**: Modular architecture with separate header files
- [ ] **Unit Testing**: Comprehensive test suite implementation
- [ ] **Documentation**: Auto-generated API documentation
- [ ] **CI/CD Pipeline**: Automated building and testing
- [ ] **Docker Support**: Containerized deployment options

## 🙏 Acknowledgements

### 🎓 Educational Context
This project was developed as part of an Object-Oriented Programming (OOP) course, demonstrating practical applications of C++ concepts in real-world scenarios.

### 🛠️ Tools and Technologies
- **C++ Standard Library**: For core functionality and file operations
- **GitHub**: Version control and collaborative development
- **Markdown**: Documentation formatting and presentation

### 📚 Learning Resources
- C++ Programming concepts and best practices
- Object-Oriented Design patterns and principles
- Public transportation system analysis and modeling

### 🤝 Community
Special thanks to:
- The C++ community for continuous learning resources
- Open source contributors who inspire better coding practices
- Fellow students and instructors who provided valuable feedback

### 🏢 Inspiration
This project draws inspiration from real-world urban transportation systems and aims to provide a simplified yet comprehensive model for understanding transport management software architecture.

---

<div align="center">

**⭐ If you find this project helpful, please consider giving it a star! ⭐**

Made with ❤️ by the Transport Tree Team

</div>