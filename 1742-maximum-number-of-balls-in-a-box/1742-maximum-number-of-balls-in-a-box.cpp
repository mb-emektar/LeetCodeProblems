class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> boxes;
        int maxBox = 0;

        for(int i = 0; i<highLimit-lowLimit+1; i++)
        {
            int number = lowLimit+i;
            int boxNumber = 0;
            while(number>=1)
            {
                boxNumber += number%10;
                number = number/10;
            }
            boxes[boxNumber]++;
            if(boxes[boxNumber] > boxes[maxBox]) maxBox = boxNumber;
        }
        return boxes[maxBox];
    }
};