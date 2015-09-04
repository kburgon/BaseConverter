#include <iostream>
#include <vector>

void convertToBinary(std::vector<bool>& bNum, int decNum)
{
	std::cout << decNum << "/2=" << decNum / 2 << ", remainder " << decNum % 2 << std::endl;
	if (decNum / 2 != 0) convertToBinary(bNum, decNum / 2);
	bNum.push_back(decNum % 2);
}

void printBinaryVector(std::vector<bool> toPrint)
{
	for (auto&& digit:toPrint)
	{
		std::cout << digit;
	}
}

int main(void)
{
	std::cout << "Number to convert: ";
	int toConvert;
	std::cin >> toConvert;
	std::vector<bool> result;
	convertToBinary(result, toConvert);
	std::cout << "Result: ";
	printBinaryVector(result);
	std::cout << std::endl;
	return 0;
}