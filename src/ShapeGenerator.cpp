#include "ShapeGenerator.h"
#include "VertexStruct.h"
#include "glm.hpp"
#define NUM_ELEMENTS_ARRAY(A) sizeof(A)/sizeof(*A)
ShapeData<Vertex> ShapeGenerator::makeTriangle()
{
	ShapeData<Vertex> ret;
    Vertex Triangle[] =
    {
       glm::vec3(-1.0f,1.0f,0.00f),//pos
       glm::vec3(0.0f,1.0f,0.99f),//color

       glm::vec3(-1.0f,0.0f,0.0f),
       glm::vec3(1.0f,0.0f,0.0f),

       glm::vec3(-0.8f,1.0f,0.0f),
       glm::vec3(1.0f,0.0f,0.99f),
    };
    ret.vertecies = Triangle;
    ret.numVertecies = NUM_ELEMENTS_ARRAY(Triangle);
    unsigned short indecies[] =
    {
        0,1,2
    };
    ret.indecies = indecies;
    ret.numIndecies = NUM_ELEMENTS_ARRAY(indecies);
    return std::move(ret);
}
ShapeData<VertexTex> ShapeGenerator::makeSquare()
{
	ShapeData<VertexTex> ret;
	VertexTex Square[] =
	{
	   glm::vec3(1.0f,1.0f,0.00f),//pos // top left
	   glm::vec3(1.0f,0.0f,1.0f),//color
	   glm::vec2(1.0f,1.0f),
	   glm::vec3(1.0f,-1.0f,0.0f), // bottom left
	   glm::vec3(0.0f,1.0f,1.0f),
	   glm::vec2(1.0f,0.0f),
	   glm::vec3(-1.0f,-1.0f,0.0f), // bottom right
	   glm::vec3(1.0f,1.0f,0.00f),
	   glm::vec2(0.0f,0.0f),
	   glm::vec3(-1.0f,1.0f,0.0f), // top right
	   glm::vec3(1.0f,1.0f,1.00f),
	   glm::vec2(0.0f,1.0f),
	};
	ret.vertecies = Square;
	ret.numVertecies = NUM_ELEMENTS_ARRAY(Square);
	unsigned short indecies[] =
	{
		0,1,2,
		3,0,2
	};
	ret.indecies = indecies;
	ret.numIndecies = NUM_ELEMENTS_ARRAY(indecies);
	return std::move(ret);
}
ShapeData<Vertex> ShapeGenerator::makeCube()
{
	ShapeData<Vertex> ret;
	Vertex stackVerts[] =
	{
		glm::vec3(-1.0f, +1.0f, +1.0f),  // 0
		glm::vec3(+1.0f, +0.0f, +0.0f),	// Color
		glm::vec3(+1.0f, +1.0f, +1.0f),  // 1
		glm::vec3(+0.0f, +1.0f, +0.0f),	// Color
		glm::vec3(+1.0f, +1.0f, -1.0f),  // 2
		glm::vec3(+0.0f, +0.0f, +1.0f),  // Color
		glm::vec3(-1.0f, +1.0f, -1.0f),  // 3
		glm::vec3(+1.0f, +1.0f, +1.0f),  // Color

		glm::vec3(-1.0f, +1.0f, -1.0f),  // 4
		glm::vec3(+1.0f, +0.0f, +1.0f),  // Color
		glm::vec3(+1.0f, +1.0f, -1.0f),  // 5
		glm::vec3(+0.0f, +0.5f, +0.2f),  // Color
		glm::vec3(+1.0f, -1.0f, -1.0f),  // 6
		glm::vec3(+0.8f, +0.6f, +0.4f),  // Color
		glm::vec3(-1.0f, -1.0f, -1.0f),  // 7
		glm::vec3(+0.3f, +1.0f, +0.5f),  // Color

		glm::vec3(+1.0f, +1.0f, -1.0f),  // 8
		glm::vec3(+0.2f, +0.5f, +0.2f),  // Color
		glm::vec3(+1.0f, +1.0f, +1.0f),  // 9
		glm::vec3(+0.9f, +0.3f, +0.7f),  // Color
		glm::vec3(+1.0f, -1.0f, +1.0f),  // 10
		glm::vec3(+0.3f, +0.7f, +0.5f),  // Color
		glm::vec3(+1.0f, -1.0f, -1.0f),  // 11
		glm::vec3(+0.5f, +0.7f, +0.5f),  // Color

		glm::vec3(-1.0f, +1.0f, +1.0f),  // 12
		glm::vec3(+0.7f, +0.8f, +0.2f),  // Color
		glm::vec3(-1.0f, +1.0f, -1.0f),  // 13
		glm::vec3(+0.5f, +0.7f, +0.3f),  // Color
		glm::vec3(-1.0f, -1.0f, -1.0f),  // 14
		glm::vec3(+0.4f, +0.7f, +0.7f),  // Color
		glm::vec3(-1.0f, -1.0f, +1.0f),  // 15
		glm::vec3(+0.2f, +0.5f, +1.0f),  // Color

		glm::vec3(+1.0f, +1.0f, +1.0f),  // 16
		glm::vec3(+0.6f, +1.0f, +0.7f),  // Color
		glm::vec3(-1.0f, +1.0f, +1.0f),  // 17
		glm::vec3(+0.6f, +0.4f, +0.8f),  // Color
		glm::vec3(-1.0f, -1.0f, +1.0f),  // 18
		glm::vec3(+0.2f, +0.8f, +0.7f),  // Color
		glm::vec3(+1.0f, -1.0f, +1.0f),  // 19
		glm::vec3(+0.2f, +0.7f, +1.0f),  // Color

		glm::vec3(+1.0f, -1.0f, -1.0f),  // 20
		glm::vec3(+0.8f, +0.3f, +0.7f),  // Color
		glm::vec3(-1.0f, -1.0f, -1.0f),  // 21
		glm::vec3(+0.8f, +0.9f, +0.5f),  // Color
		glm::vec3(-1.0f, -1.0f, +1.0f),  // 22
		glm::vec3(+0.5f, +0.8f, +0.5f),  // Color
		glm::vec3(+1.0f, -1.0f, +1.0f),  // 23
		glm::vec3(+0.9f, +1.0f, +0.2f),  // Color
	};
    ret.vertecies = stackVerts;
    ret.numVertecies = NUM_ELEMENTS_ARRAY(stackVerts);
	unsigned short stackIndices[] = {
		0,   1,  2,  0,  2,  3, // Top
		4,   5,  6,  4,  6,  7, // Front
		8,   9, 10,  8, 10, 11, // Right
		12, 13, 14, 12, 14, 15, // Left
		16, 17, 18, 16, 18, 19, // Back
		20, 22, 21, 20, 23, 22, // Bottom
	};
    ret.indecies = stackIndices;
    ret.numIndecies = NUM_ELEMENTS_ARRAY(stackIndices);
    return std::move(ret);
}

ShapeData<VertexTex> ShapeGenerator::makeTexturedCube()
{
	ShapeData<VertexTex> ret;
	VertexTex Square[] =
	{
	glm::vec3(-0.5f, +0.5f, +0.5f),  // 0
	glm::vec3(+1.0f, +0.0f, +0.0f),	// Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(+0.5f, +0.5f, +0.5f),  // 1
	glm::vec3(+0.0f, +1.0f, +0.0f),	// Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(+0.5f, +0.5f, -0.5f),  // 2
	glm::vec3(+0.0f, +0.0f, +1.0f),  // Color
	glm::vec2(0.0f,0.0f),
	glm::vec3(-0.5f, +0.5f, -0.5f),  // 3
	glm::vec3(+1.0f, +1.0f, +1.0f),  // Color
	glm::vec2(1.0f,0.0f),

	glm::vec3(-0.5f, +0.5f, -0.5f),  // 4
	glm::vec3(+1.0f, +0.0f, +1.0f),  // Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(+0.5f, +0.5f, -0.5f),  // 5
	glm::vec3(+0.0f, +0.5f, +0.2f),  // Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(+0.5f, -0.5f, -0.5f),  // 6
	glm::vec3(+0.8f, +0.6f, +0.4f),  // Color
	glm::vec2(0.0f,0.0f),
	glm::vec3(-0.5f, -0.5f, -0.5f),  // 7
	glm::vec3(+0.3f, +1.0f, +0.5f),  // Color
	glm::vec2(1.0f,0.0f),

	glm::vec3(+0.5f, +0.5f, -0.5f),  // 8
	glm::vec3(+0.2f, +0.5f, +0.2f),  // Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(+0.5f, +0.5f, +0.5f),  // 9
	glm::vec3(+0.9f, +0.3f, +0.7f),  // Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(+0.5f, -0.5f, +0.5f),  // 10
	glm::vec3(+0.3f, +0.7f, +0.5f),  // 
	glm::vec2(0.0f,0.0f),
	glm::vec3(+0.5f, -0.5f, -0.5f),  // 11
	glm::vec3(+0.5f, +0.7f, +0.5f),  // Color
	glm::vec2(1.0f,0.0f),

	glm::vec3(-0.5f, +0.5f, +0.5f),  // 12
	glm::vec3(+0.7f, +0.8f, +0.2f),  // Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(-0.5f, +0.5f, -0.5f),  // 13
	glm::vec3(+0.5f, +0.7f, +0.3f),  // Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(-0.5f, -0.5f, -0.5f),  // 14
	glm::vec3(+0.4f, +0.7f, +0.7f),  // Color
	glm::vec2(0.0f,0.0f),
	glm::vec3(-0.5f, -0.5f, +0.5f),  // 15
	glm::vec3(+0.2f, +0.5f, +1.0f),  // Color
	glm::vec2(1.0f,0.0f),

	glm::vec3(+0.5f, +0.5f, +0.5f),  // 16
	glm::vec3(+0.6f, +1.0f, +0.7f),  // Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(-0.5f, +0.5f, +0.5f),  // 17
	glm::vec3(+0.6f, +0.4f, +0.8f),  // Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(-0.5f, -0.5f, +0.5f),  // 18
	glm::vec3(+0.2f, +0.8f, +0.7f),  // Color
	glm::vec2(0.0f,0.0f),
	glm::vec3(+0.5f, -0.5f, +0.5f),  // 19
	glm::vec3(+0.2f, +0.7f, +1.0f),  // Color
	glm::vec2(1.0f,0.0f),

	glm::vec3(+0.5f, -0.5f, -0.5f),  // 20
	glm::vec3(+0.8f, +0.3f, +0.7f),  // Color
	glm::vec2(1.0f,1.0f),
	glm::vec3(-0.5f, -0.5f, -0.5f),  // 21
	glm::vec3(+0.8f, +0.9f, +0.5f),  // Color
	glm::vec2(0.0f,1.0f),
	glm::vec3(-0.5f, -0.5f, +0.5f),  // 22
	glm::vec3(+0.5f, +0.8f, +0.5f),  // Color
	glm::vec2(0.0f,0.0f),
	glm::vec3(+0.5f, -0.5f, +0.5f),  // 23
	glm::vec3(+0.9f, +1.0f, +0.2f),  // Color
	glm::vec2(1.0f,0.0f),
	};
	ret.vertecies = Square;
	ret.numVertecies = NUM_ELEMENTS_ARRAY(Square);
	unsigned short indecies[] =
	{
		0,   1,  2,  0,  2,  3, // Top
		4,   5,  6,  4,  6,  7, // Front
		8,   9, 10,  8, 10, 11, // Right
		12, 13, 14, 12, 14, 15, // Left
		16, 17, 18, 16, 18, 19, // Back
		20, 22, 21, 20, 23, 22, // Bottom
	};
	ret.indecies = indecies;
	ret.numIndecies = NUM_ELEMENTS_ARRAY(indecies);
	return std::move(ret);
}
