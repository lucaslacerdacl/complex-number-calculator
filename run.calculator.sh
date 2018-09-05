Echo "Getting packages"
git clone https://github.com/LucasLacerdaCL/complex-number.git
rm -rf ./packages
mkdir packages
mv ./complex-number ./packages/complex-number

Echo "Generating calculator binary"
g++ -c ./src/implementations/calculator.cpp
rm -rf ./src/dist/calculator.o
mv ./calculator.o ./src/dist/

Echo "Generating main binary"
g++ -c ./src/main.cpp
rm -rf ./src/dist/main.o
mv ./main.o ./src/dist/