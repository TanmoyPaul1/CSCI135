#include <iostream>
#include "funcs.h"

std::string box(int width, int height)
{
	if (height < 0 || width < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			result += "*";
		}
		result += "\n";
	}
	return result;
}

std::string checkerboard(int width, int height)
{
	if (height < 0 || width < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	for (int i = 2; i < height+2; i++)
	{
		for (int j = 2; j < width+1; j+=2)
		{
			if (i % 2 == 0) {
				result += "* ";
			}
			else if (i % 2 == 1) {
				result += " *";
			}
		}
		if ((i + 2) % 2 == 0) {
			result += "*";
		}
		result += "\n";
	}
	return result;
}

std::string cross(int size)
{
	if (size < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	//First half of cross
	for (int i = 0; i < (size/2); i++)
	{
		for (int j = 0; j < i; j++)
		{
			result += " ";
		}
		result += "*";
		for (int k = i+1; k < (size-i-1); k++)
		{
			result += " ";
		}
		result += "*";
		for (int l = size - i; l < size; l++)
		{
			result += " ";
		}
		result += "\n";
	}
	//Middle of the cross
	if (size % 2 == 1) 
	{
		for (int i = 0; i < size / 2; i++) {
			result += " ";
		}
		result += "*\n";
	}
	//Second half of cross
	for (int i = (size / 2); i > 0; i--)
	{
		for (int l = size - i; l < size-1; l++)
		{
			result += " ";
		}
		result += "*";
		for (int k = (size - i+1); k > i+1; k--)
		{
			result += " ";
		}
		result += "*";
		for (int j = 0; j < i - 1; j++)
		{
			result += " ";
		}
		result += "\n";
	}
	return result;
}

std::string lower(int length)
{
	if (length < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	for (int i = 1; i < length+1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			result += "*";
		}
		result += "\n";
	}
	return result;
}

std::string upper(int length)
{
	if (length < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			result += " ";
		}
		for (int k = i; k < length; k++)
		{
			result += "*";
		}
		result += "\n";
	}
	return result;
}

std::string trapezoid(int width, int height)
{
	if (width == 1 && height == 1)
	{
		return "*";
	}
	if(width < 1 || height<1 || height>(width/2))
	{
		return "Impossible shape!\n";
	}
	std::string result;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			result += " ";
		}
		for (int j = 0; j < (width-(2*i)); j++)
		{
			result += "*";
		}
		result += "\n";
	}
	return result;
}

std::string checker3x3(int width, int height)
{
	if (height < 0 || width < 0)
	{
		return "Invalid input\n";
	}
	std::string result;
	int index = 1;
	for (int i = 1; i <= height; i++)
	{
		if (i % 6 == 1 || i % 6 == 2 || i % 6 == 3) 
		{
			for (int j = 1; j <= width; j++) 
			{
				if (index % 6 == 1 || index % 6 == 2 || index % 6 == 3)
				{
					result += "*";
					index++;
				}
				else if (index % 6 == 4 || index % 6 == 5 || index % 6 == 0)
				{
					result += " ";
					index++;
				}
			}
		}
		else if (i % 6 == 4 || i % 6 == 5 || i % 6 == 0) {
			for (int j = 1; j <= width; j++)
			{
				if (index % 6 == 1 || index % 6 == 2 || index % 6 == 3)
				{
					result += " ";
					index++;
				}
				else if (index % 6 == 4 || index % 6 == 5 || index % 6 == 0)
				{
					result += "*";
					index++;
				}
			}
		}
		result += "\n";
		index = 1;
	}
	return result;
}