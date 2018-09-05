cd ./src/dist
rm -rf ./main.exe
g++ ./calculator.o ./main.o ../../packages/complex-number/src/dist/complex.euclidean.o  -o main.exe
./main.exe