/**
 * File: Demo.cpp
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */

#include <iostream>
#include "DemoItem.h"
#include "Demo.h"

using namespace std;


// Initialise the array of DemoItem objects.

Demo::Demo()
{
	for (int i = 0; i < TOTAL_DEMO_ITEMS; i++)
		items[i].Set(i);
}

/// Increment each value by 2.
void Demo::Run()
{
	for (int i = 0; i < TOTAL_DEMO_ITEMS; i++)
	{
		items[i].Set(items[i].Get() + 2);
	}

	for (int i = 0; i < TOTAL_DEMO_ITEMS; i++)
	{
		cout << items[i].Get() << endl;
	}
	cout << endl;
}