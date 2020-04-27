# structCalculator

A simple calculation which adds varies common C++ data types to determine the total size. It's useful when people are working on file IO or network IOs.

# installation

```
git clone https://github.com/n6171028/structCalculator.git
cd structCalculator
mkdir -p build
cd build
rm -rf *
cmake ..
make

```
# To use it
Press the data type, and then use the NumPad to add the size (if it is an array). Default is 1. Then press enter.

Example:
```
struct Example
{
  uint_8      A[10]
  int_32      B[20]
  char        C[30]
  double      D[40]
}
```
You should press:
Clear - char - 1 - 0 - Enter - int - 2 - 0 - Enter - char - 3 - 0 - Enter - double - 4 - 0 - Enter
It will give you answer 440

# Notes
It's not well tested yet, and it was only tested built on Ubuntu 18.04. 

