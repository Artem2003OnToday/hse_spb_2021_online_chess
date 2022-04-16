#pragma once
#include "include/pieces/pieces.h"

class chessboard_square {
private:
  sf::CircleShape *mark = nullptr;
  pieces *figureOnSquare = nullptr;
  sf::Vector2f square_coordinate;
  bool pieceIsHere = false;
  sf::Image *squareImage;
  sf::Texture *squareTexture;
  sf::Sprite *squareSprite;

public:
  ~chessboard_square();
  chessboard_square(sf::Vector2f coordinates, std::string file);
  sf::Vector2f &getPosition();
  sf::Sprite &getModel();
  void setRealPiece(pieces *piece);
  pieces &getPieceOnSquare();
  bool isPiece();
  void setMovedPiece(chessboard_square &otherSquare);
  sf::CircleShape *getMark();
  void setMark(sf::Color color);
  void cleanMark();
};