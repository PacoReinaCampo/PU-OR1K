export PATH=/opt/or1k-elf-gcc/bin:${PATH}

rm -rf elf
rm -rf hex
rm -rf or1k-tests

mkdir elf
mkdir hex

git clone --recursive https://github.com/openrisc/or1k-tests

cd or1k-tests/native
make clean
make

cd build/or1k

source ../../../../elf2hex.sh

mv *.hex ../../../../hex
mv or1k-* ../../../../elf

cd ../..

make clean
