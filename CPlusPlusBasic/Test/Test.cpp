﻿#include <iostream>
#include "Test.h"
using namespace std;

long sum_v1(int array[], int length);
long sum_v2(int array[], int length);

int main()
{
	const int length = 500;
	int array[length] = {
-8116, 7910, -6019, 3289, -9198, -1202, -3709, -3014, 6139, 4752, -7209, 9281, 8732, 6087, -7993, -8013, 1372, -918, -3557, -6833, -7412, -2730,
-6561, -5258, -4043, 4603, 6244, -562, -200, 1779, -5655, 1671, 1554, 4808, 9555, -3168, -9984, -7965, -6012, -8763, 6337, 6659, -5587, 3387, -704, 9767, -7654, -2915, -4907, -8619, -682, 4295, -6655, 4658, -2128, -13, 6179, -5352, 1596, 5154, -4565, -3926, -3561, -6978, -4024, -1665, 9837, 9085, -1559, 3750, -1632, -5527, 2337, 2283, -6786, -5667, -2421, 6647, 639, 4593, -2766, 8087, 2119, -9349, -2137, -5409, -8498, -9458, -5442,
	-945, -5405, 1251, 2263, 2548, 6412, -1437, -6892, 2801, -3758, 5689,
-3723, -9537, -6855, 3275, -4031, -5678, -5161, 2769, -4637, -1504, -7459,
-2568, -3849, 2939, -8167, -7759, -9532, -3258, -2657, -1684, 782, 5255, 70, -6406, 5348, 1433, -8242, -5379, -4450, -8633, 8553, 6556, -2483,
-3306, -4900, -2346, 6473, -1217, 6683, -228, -9008, -1531, -8769, -3593, 8688, 2983, 8273, -3886, 2049, -594, -5138, 340, -1895, -7701, 1832, 2318, -3684, -2877, 7495, 949, -9457, -2261, -6147, 334, 4408, -7183, -8080, 9968, 4962, -7780, 54, 3464, -8934, -5037, 5257, -5319, -1980, -4189,
-1447, -7482, -1018, -6657, -32, 4306, 1034, -224, -5164, -2010, 9507, 3703, -449, -3118, -4496, -3837, 4818, -8361, -7009, 4440, 7737, -7838,
	-7275,-8274, 780, -6530, 8747, 529, -9305, -9467, 4729, -4903, 919, 5973,
	-5797, 6240, -2212, -2516, 4870, -4944, 6863, -1782, 5830, -577, 3067,
	-354, -5819, 1431, -268, -643, 330, -5897, 1445, -395, 2918, 478, -1399,
	-7388, -86, -890, 7293, 131, -423, 9517, -6314, -3033, -3865, 2716, 8206,
-504, -6600, -8413, -1467, 2115, -5559, -7774, 7942, -1185, -1190, 1646, 9704, -8885, -8254, -4270, 2839, -5522, -1120, 9427, 5009, -2013, -5763,
	-2888, -3209, -6311, -2034, 6602, -4775, -5277, 6993, 4313, 2013, -6606,
	-3259, -3872, -3940, -8006, -1705, -246, -5016, 9085, 727, -9006, 5911,
-3959, -6420, -1518, 9242, 9624, 8588, -4392, -4591, 2658, -4818,
-9357, 4601, -9614, -5606, -5575, -4947, -4494, -9980, 9503, -785, -3730, 729, -9553, -7044, -2794, 8598, -1733, -249, -9726, 3135, 4203, -2102, -6309,-6800, 2912, 8885, -2533, -8113, 9363, -277, -6037, -5531, -34, -9105,
-3787, -8149, 1599, 2745, -1220, 2246, -6313, 1805, 1415, 4759, -4841, 1100, -2466, -2417, -736, 1484, 84, 4960, 3776, 2503, -3794, 4537, -732,
	-8015, -4453, -8428, -3956, -981, 7972, 4840, 2273, -481, 2281, 6885,
	-2716, -4829, 5513, -3807, 9191, -4546, 3394, -3284, 4195, -2025, -197,
	-1495, -1599, 1408, -4194, 4223, -1702, 7703, -1080, 4238, 1957, 5203,
-7932, 2305, -7379, -5574, -3273, -7165, -1086, -9233, 4824, -1006, 2259, 339, 5409, 5401, -1958, -6643, -7030, -9188, -742, -4415, 6803, 5644, 8259, -8343, -156, -3643, 9663, 8770, -6864, -4489, -4918, -2809, -5187, 3390,-1702, 7131, -6230, 474, -6294, -7542, 5192, -7686, -5999, -909, 9675, 9978, -6347, -5922, -6745, -8560, 2593, 2614, -4397, 7073, -8877, -2575,
	-273, -5799, 7545, 6577, -2801, -2950, -324, 275, -3314, -8460, 3902,
	-3301, -5850, -3657, -5375, 3320, 9858, 8389, -87, -7670, -1742, 5515,
-2558, -3523, -5826, -6830, -4701, -3269, 6461, -879, -6570, -3489, -6358, -4765, 7696, -5173, -7348, 6882, 6469, -4003, -4289, -6356, -4735, -4481, 1651, -2719, -7887, -8704, -2354, 635, -8672, -671, -166
	};
	long value = sum(array, 500);

	cout << "The sum of negative even numbers that are not in the range [-999,-333] is: "
		<< value << endl;
}

long sum_v1(int array[], int length) 
{
	long sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] < 0 && array[i] % 2 == 0 && (array[i] < -999 || array[i] > -333))
		{
			sum += array[i];
		}
	}
	return sum;
}


long sum_v2(int array[], int length)
{
	long sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] < 0 && array[i] % 2 == 0 && !(array[i] >= -999 && array[i] <= -333))
		{
			sum += array[i];
		}
	}
	return sum;
}