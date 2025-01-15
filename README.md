# so_long
So_long is a 2D game project developed as part of the 42 programming school curriculum. It's the fifth project in the Cursus and the first graphical project students encounter

![Screenshot from 2025-01-15 08-40-42](https://github.com/user-attachments/assets/14606afb-7608-41c1-a4b1-e538b37676f6)

## Key Features

- Top-down game coded from scratch using the MiniLibX graphical library
- Validates the map passed as an argument
- Implements memory leak prevention
- Handles game mechanics, window management, event handling, sprite and map management

## Requirements

- Each function should not exceed 25 lines, excluding curly braces
- Each line should not exceed 80 characters
- Functions can have a maximum of 4 named parameters
- No more than 5 variables can be declared per function
- Certain control structures (for, do-while, switch, case, goto, ternary operators) are prohibited

## Gameplay

- Players control a character represented by 'P' on the map
- The goal is to collect all 'C' (collectible) items and reach the 'E' (exit) in the fewest moves possible
- The game starts with a single 'P', one 'E', and multiple 'C's

## Implementation

- Reads a map file with a .ber extension
- Renders the map, handles player movement, collects items, and manages the game state
- Uses the MiniLibX library for graphics and event handling

## Testing

To test the game:
1. Compile and run the project with different maps
2. Test various scenarios like hitting walls, moving without collecting all items, and trying to exit without collecting everything
3. Check keyboard controls (arrow keys and WASD)
4. Verify proper closing of the window
5. Test memory leak prevention using tools like Valgrind

## Learning Outcomes

So_long helps students learn:
- Basic 2D game development
- Graphical programming with MiniLibX
- Event handling and window management
- Memory leak prevention
- Game logic and state management

## Contributing

Contributions to this project are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
This structure provides a clear and organized description of the so_long project, including its key features, requirements, gameplay, implementation details, testing procedures, learning outcomes, contribution guidelines, and license information. It's formatted using Markdown syntax, which is well-supported on GitHub, making it easy to read and maintain.
