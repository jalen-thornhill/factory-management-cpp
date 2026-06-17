# Test Plan

## Purpose

This document outlines the manual tests used to verify the Factory Management System.

## Test Environment

- Language: C++
- Compiler: g++
- Interface: Console
- Operating System: Windows

## Test Cases

| Test ID | Feature | Test Action | Expected Result |
|---|---|---|---|
| T1 | Factory setup | Start program and display items | 100 items are initialized and displayed |
| T2 | Modify item | Modify item at index 0 | Name and size update, ID stays the same |
| T3 | Invalid modify index | Enter index outside valid range | Program rejects invalid position |
| T4 | Search by ID | Search for ID 5 | Item 5 is found at index 4 |
| T5 | Search by ID not found | Search for ID 999 | Program displays not found |
| T6 | Search by name | Search for Item 5 | Item 5 is found |
| T7 | Search by name not found | Search for Fake Item | Program displays not found |
| T8 | Reverse display | Display items in reverse order | Item 100 appears first, Item 1 appears last |
| T9 | Sort by ID | Sort items by ID | Items appear in ascending ID order |
| T10 | Sort by size | Modify sizes, then sort by size | Items appear from smallest size to largest |
| T11 | Uniform randomization | Randomize item sizes uniformly | Sizes are between 10 and 100 |
| T12 | Normal randomization | Randomize item sizes normally | Sizes are mostly near 50 and remain between 10 and 100 |