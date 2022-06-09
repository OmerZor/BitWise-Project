#include<stdio.h>





int pack4Chars2Int(char c1, char c2, char c3, char c4);
int checkEvenParity(short input);


void main()
{
	int short sendVal = -14580;
	int ret = pack4Chars2Int('a', 'b', 'c', 'd');
	int val = checkEvenParity(sendVal);
}

int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	int retVal=0;
	retVal |= c1;
	retVal = retVal << 8;
	retVal |= c2;
	retVal= retVal<< 8;
	retVal |= c3;
	retVal = retVal << 8;
	retVal |= c4;
	return retVal;
}
int checkEvenParity(short input)
{
	int counter = 0;

	while (input != 0&&input!=-1)
	{
		if (input & 1)
			counter++;
		
		input = input>> 1;

	}
	counter %= 2;
	if ( counter== 1)
		return 0;
	else
		return 1;
}
