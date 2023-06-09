#ifndef ASTEROID_3D_CHESSBOARD_H
#define ASTEROID_3D_CHESSBOARD_H


#include <vector>
#include "../program_state/program_state.h"

class Chessboard {
    Mesh *mesh;
    std::vector<Vertex> vertices;
    Texture *texture;
    void addChessboardToDraw();
    void copyMandTransform(glm::mat4 M);
public:
    Chessboard();
    glm::mat4 obj;
    void draw(glm::mat4 M);
};


#endif //ASTEROID_3D_CHESSBOARD_H
