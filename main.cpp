#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{
    int cousin = 13195;
	int primo = 0;
	int ultimo = 0;

	while(cousin >= 2)
    {
        if(cousin>2)
        {
            cousin = cousin/2;
            if(cousin > 2)
            {
                ultimo = cousin;
            }
        }

        if(cousin > 1)
        {
               primo++;
        }
        if(cousin < 2)
        {
            primo--;
            int operador = primo * 2;
            cout << "2" << "x" <<ultimo;
        }
	}
    return 0;
}
