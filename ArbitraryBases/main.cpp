#include <iostream>
#include <vector>

void convertToBase(std::vector<short>& bNum, int decNum, int baseNum)
{
	std::cout << decNum << "/" << baseNum << "=" << decNum / baseNum << ", remainder " << decNum % baseNum << std::endl;
	if (decNum / baseNum != 0) convertToBase(bNum, decNum / baseNum, baseNum);
	bNum.push_back(decNum % baseNum);
}

void printBinaryVector(std::vector<short> toPrint)
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
	std::cout << "Base to convert to: ";
	int cBase;
	std::cin >> cBase;
	std::vector<short> result;
	convertToBase(result, toConvert, cBase);
	std::cout << "Result: ";
	printBinaryVector(result);
	std::cout << std::endl;
	return 0;
}