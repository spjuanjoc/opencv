# Hello OpenCV

Hello world with OpenCV 4 using Conan.  
Shows the image of Lena
![img](lena.png "Lena")


From the [example](https://docs.opencv.org/4.5.2/db/df5/tutorial_linux_gcc_cmake.html)

## Build

```shell
mkdir build && cd build
cmake -DCMAKE_MODULE_PATH=$PWD -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .
```

## Run

```shell
./hellocv_cpp ../lena.png
```


## Tools 
* CMake > 3.12
* gcc-7 c++ std 17
* Conan > 1.35.0
* OpenCV > 4.5.2
