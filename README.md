# unit_testing
--->Initial setup:
step 1: download and extract in any directory
step 2: googleTest library shuld be installed on your system if not refer to the 
run:
sudo apt-get install libgtest-dev
sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder by
sudo cp *.a /usr/lib

--->To compile and run Tests
To compile and run by cmake we will use of
CMakeLists.txt file  which contains a set of directives and instructions describing the project's source files and targets (executable, library, or both).
1.to compile run: cmake CMakeLists.txt
2. make
3. /runTests
