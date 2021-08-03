filename=$1
g++ ./src/$filename.cpp -o ./src/build/$filename && ./src/build/$filename
# g++ repetitionFun.cpp -o build/repetitionFun && build/repetitionFun