class Solution {
public:
    bool isLongPressedName(std::string name, std::string typed) 
    {
        int pointerOG{ 0 };
        int pointerTP{ 0 };

        while (pointerTP < typed.length()) 
        {
            if (pointerOG < name.length() &&
                name[pointerOG] == typed[pointerTP]) 
            {
                pointerOG++;
            }
            else if (pointerTP == 0 ||
                     typed[pointerTP] != typed[pointerTP - 1]) 
            {
                return false;
            }
            pointerTP++;
        }

        return pointerOG == name.length();
    }
};