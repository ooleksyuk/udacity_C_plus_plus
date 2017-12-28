## Tic Tac Toe

This is a Tic Tac Toe game for two players for 16 squares.

To start a game clone the repo and in the console go to the repo,
type `./main`, this will start a compiled version of the game.

You'll be promted to enter names for two players.
The game is using two coordinates for making a move `(x, y)`.

The Gameboard looks like this:

|  `x,y` | 0 | 1 | 2 | 3 |
| ------ | - | - | - | - |
|    0   | - | - | - | - |
|    1   | - | - | - | - |
|    2   | - | - | - | - |
|    3   | - | - | - | - |


First you'll be prompted to enter `x`, than `y`.

By entering for `x` `x = 0, y = 2` and for `o` `x = 1, y = 3` you'll get:

|  `x,y` | 0 | 1 | 2 | 3 |
| ------ | - | - | - | - |
|    0   | - | - | - | - |
|    1   | - | - | - | - |
|    2   | `x` | - | - | - |
|    3   | - | `o` | - | - |

I am working to improve the game by outputting layout of the game board before each move. TBD.
