# Image Fusion

## Overview

Image Fusion is a project designed to **integrate Go and C++ code**. This application features a web server built in Go, while the image processing is performed using C++ and OpenCV. This project serves as a trial and verification for myself to successfully build and run two different programming languages together in a single project.

## Features

- **Web Server**: Built with Go to handle image requests.
- **Image Processing**: Uses C++ for efficient image manipulation (e.g., converting images to grayscale).

## Installation

### Prerequisites

- Go: Download from [golang.org](https://golang.org/)
- C++: Ensure you have a compatible compiler.

### Download OpenCV

To install OpenCV, follow the instructions from the [OpenCV installation guide](https://opencv.org/releases/). Ensure you have the required libraries and dependencies set up.

### Clone the Repository

```bash
git clone https://github.com/Masum-Osman/image-fusion.git
cd image-fusion
```

### Build the C++ Processor

The project uses a Makefile for building the C++ component. To compile the code, simply run:

```bash
make
```

This command generates a shared library `image_processor.so`.

### Run the Application

```bash
go run main.go
```

## Usage

The application listens for image processing requests and invokes the C++ processor to handle the images.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any inquiries, please reach out to [Masum Osman](mailto:osmanmasum.cs@gmail.com).
