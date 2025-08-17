#ifndef GRID_H
#define GRID_H

#include <vector>

namespace Game {

class Grid {
  public:
    Grid(const int width, const int height, const int cellSize)
        : rows(height / cellSize), cols(width / cellSize), cellSize(cellSize),
          cells(rows, std::vector<int>(cols, 0)) {};
    void draw();
    void set(const int row, const int col, const int value);
    const int get(const int row, const int col);
    void clear();

  private:
    int rows;
    int cols;
    int cellSize;
    std::vector<std::vector<int>> cells;
};
} // namespace Game

#endif