# so_long
So_long is a 2D game project developed as part of the 42 programming school curriculum. It's the fifth project in the Cursus and the first graphical project students encounter

![Screenshot from 2025-01-15 08-40-42](https://github.com/user-attachments/assets/14606afb-7608-41c1-a4b1-e538b37676f6)

## Key Features

- Top-down game coded from scratch using the MiniLibX graphical library 💻
- Validates the map passed as an argument ✅
- Implements memory leak prevention ⚙️
- Handles game mechanics, window management, event handling, sprite and map management 🔄

## Gameplay

- Players control a character represented by 'P' on the map 👤
- The goal is to collect all 'C' (collectible) items and reach the 'E' (exit) in the fewest moves possible 🏁
- The game starts with a single 'P', one 'E', and multiple 'C's 🎯

## Implementation

- Reads a map file with a .ber extension 📁
- Renders the map, handles player movement, collects items, and manages the game state 🖼️
- Uses the MiniLibX library for graphics and event handling 🖥️

## Testing

To test the game:
1. Compile and run the project with different maps 💻
2. Test various scenarios like hitting walls, moving without collecting all items, and trying to exit without collecting everything 🔄
3. Check keyboard controls (arrow keys and WASD) 🖥️
4. Verify proper closing of the window ❌
5. Test memory leak prevention using tools like Valgrind 🐛

## Learning Outcomes

So_long helps students learn:
- Basic 2D game development 🎮
- Graphical programming with MiniLibX 💻
- Event handling and window management 🖥️
- Memory leak prevention ⚙️
- Game logic and state management 🧩

## Demo

Here's a quick demo of the gameplay:

![So_long Gameplay](./demo/gameplay.gif)

## Contributing

Contributions to this project are welcome! Please feel free to submit a Pull Request. 🤝

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. 📜
