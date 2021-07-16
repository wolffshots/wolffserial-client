# wolffserial-client

goals:
- a 4x3 grid of buttons that report when they are pressed via interrupts attached to them (12 interrupts in total all calling one report function with their identifier)
- 3 sliders/potentiometers for a ranged input which will report every time it is change by more than a certain amount (capture current value, check if different by configured amount, report if so and only update new current value if it changed and reported)
- configuration for what each button/input does will all be done on server side so this project should be agnostic to that

```
| | | [][][][]
| | | [][][][]
| | | [][][][]
```