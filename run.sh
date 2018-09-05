Echo "Getting packages"

dependencies=("complex-number;https://github.com/LucasLacerdaCL/complex-number.git")

for dependencie in "${dependencies[@]}"
do
    arrDependencie=(${dependencie//;/ })

    git clone "${arrDependencie[1]}"
    rm -rf ./packages
    mkdir packages
    mv ./"${arrDependencie[0]}" ./packages/"${arrDependencie[0]}"

    cd ./packages/"${arrDependencie[0]}"
    ./run.sh
    if [ -f "../../run.sh" ]
    then
    mv ./packages/* ../../packages
    rm -rf ./packages
    fi
    cd ../../
done


Echo "Clean Dist folder"
rm -rf ./src/dist
mkdir ./src/dist

Echo "Generating calculator binary"
g++ -c ./src/implementations/calculator.cpp
rm -rf ./src/dist/calculator.o
mv ./calculator.o ./src/dist/

Echo "Generating main binary"
g++ -c ./src/main.cpp
rm -rf ./src/dist/main.o
mv ./main.o ./src/dist/