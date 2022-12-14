#pragma once
#include <flecs.h>
#include <engine/module/space.hpp>
#include "internal_components.hpp"

namespace engine::space::internal {

void System_SpatialIndexUpdate(flecs::iter, WorldSpatialIndex*);
void System_HandeIntersections(flecs::iter, const WorldTreeObject*);

//BBOX UPDATE CALCS
void Observer_RemoveBBox(flecs::entity e);
void Observer_UpdateBBox_ObjectRotationScale(flecs::entity e, const Object& obj, const Rotation& rotation, const Scale& scale);
void Observer_UpdateBBox_ObjectRotation(flecs::entity e, const Object& obj, const Rotation& rotation);
void Observer_UpdateBBox_ObjectScale(flecs::entity e, const Object& obj, const Scale& scale);
void Observer_UpdateBBox_Object(flecs::entity e, const Object& obj); 
}