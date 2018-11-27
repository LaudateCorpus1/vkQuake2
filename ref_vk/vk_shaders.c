/*
Copyright (C) 2018 Krzysztof Kondrak

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "vk_shaders.h"

// ingame shaders stored as uint32_t arrays (autogenerated by glslangValidator)
#include "spirv/basic_vert.c"
#include "spirv/basic_frag.c"
#include "spirv/basic_color_quad_vert.c"
#include "spirv/basic_color_quad_frag.c"
#include "spirv/model_vert.c"
#include "spirv/model_frag.c"
#include "spirv/nullmodel_vert.c"
#include "spirv/nullmodel_frag.c"
#include "spirv/particle_vert.c"
#include "spirv/particle_frag.c"
#include "spirv/point_particle_vert.c"
#include "spirv/point_particle_frag.c"

const size_t basic_vert_size = sizeof(basic_vert_spv);
const size_t basic_frag_size = sizeof(basic_frag_spv);

const size_t basic_color_quad_vert_size = sizeof(basic_color_quad_vert_spv);
const size_t basic_color_quad_frag_size = sizeof(basic_color_quad_frag_spv);

const size_t model_vert_size = sizeof(model_vert_spv);
const size_t model_frag_size = sizeof(model_frag_spv);

const size_t nullmodel_vert_size = sizeof(nullmodel_vert_spv);
const size_t nullmodel_frag_size = sizeof(nullmodel_frag_spv);

const size_t particle_vert_size = sizeof(particle_vert_spv);
const size_t particle_frag_size = sizeof(particle_frag_spv);

const size_t point_particle_vert_size = sizeof(point_particle_vert_spv);
const size_t point_particle_frag_size = sizeof(point_particle_frag_spv);
