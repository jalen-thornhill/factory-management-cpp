/**
 * File: Demo.h
 * Author: Jalen Thornhill
 * Created: 2025-12-28
 * Last Modified: 2025-12-28
 */

#pragma once


const int TOTAL_DEMO_ITEMS = 10;

class Demo
{
private:
	DemoItem items[TOTAL_DEMO_ITEMS]; // Array of DemoItem Objects.

public:
	Demo();
	void Run();
};

