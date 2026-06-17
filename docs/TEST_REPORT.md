# Test Report

## Summary

The Factory Management System was manually tested through the console menu. All major features were checked for expected behavior, invalid input handling, and correct item data updates.

## Results

| Test ID | Feature | Expected Result | Actual Result | Status |
|---|---|---|---|---|
| T1 | Factory setup | 100 initialized items display | Items displayed correctly | Pass |
| T2 | Modify item | Name and size update, ID unchanged | Item updated correctly | Pass |
| T3 | Invalid modify index | Invalid position rejected | Program rejected invalid index | Pass |
| T4 | Search by ID | ID 5 found at index 4 | Correct item found | Pass |
| T5 | Search by ID not found | ID 999 not found | Not found message displayed | Pass |
| T6 | Search by name | Item 5 found | Correct item found | Pass |
| T7 | Search by name not found | Fake Item not found | Not found message displayed | Pass |
| T8 | Reverse display | Item 100 first, Item 1 last | Reverse order displayed correctly | Pass |
| T9 | Sort by ID | Items sorted by ascending ID | Items sorted correctly | Pass |
| T10 | Sort by size | Items sorted by ascending size | Items sorted correctly | Pass |
| T11 | Uniform randomization | Sizes between 10 and 100 | Sizes updated within range | Pass |
| T12 | Normal randomization | Sizes mostly near 50 and clamped | Sizes updated correctly | Pass |

## Notes

- The original item array is not permanently reversed during reverse display.
- Sorting by ID and size changes the item array order.
- Randomization changes only item size/cost values.
- Item names and IDs remain unchanged during randomization.

## Final Result

All tested features passed.