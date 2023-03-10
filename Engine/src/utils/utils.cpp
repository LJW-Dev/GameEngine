#include <GLFW/glfw3.h>
#include <ctype.h>

char USKeyboardAltKeys[256] =
{
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', '"', ' ', ' ', ' ', ' ', '<', '_', '>', '?',
	')', '!', '@', '#', '$', '%', '^', '&', '*', '(', ' ', ':', ' ', '+', ' ', ' ',

	'~', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '{', '|', '}', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',

	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '
};

int parseGLFWKeyToChar(int key, int modifier)
{
	if (key > GLFW_KEY_WORLD_2 || key < GLFW_KEY_SPACE)
		return -1;

	if (isalpha(key))
	{
		if ((modifier & GLFW_MOD_SHIFT) != GLFW_MOD_SHIFT)
			key += 0x20;
	}
	else
	{
		if ((modifier & GLFW_MOD_SHIFT) == GLFW_MOD_SHIFT)
			key = USKeyboardAltKeys[key];
	}

	return key;
}