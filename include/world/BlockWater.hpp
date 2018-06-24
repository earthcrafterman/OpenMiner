/*
 * =====================================================================================
 *
 *       Filename:  BlockWater.hpp
 *
 *    Description:
 *
 *        Created:  23/06/2018 23:19:56
 *
 *         Author:  Quentin Bazin, <quent42340@gmail.com>
 *
 * =====================================================================================
 */
#ifndef BLOCKWATER_HPP_
#define BLOCKWATER_HPP_

#include "Block.hpp"

class BlockWater : public Block {
	public:
		BlockWater(u32 id);

		void onBlockDestroy(const glm::ivec3 &blockPosition, const glm::ivec3 &thisBlockPosition, World &world) const override;
		void onTick(const glm::ivec3 &blockPosition, World &world) const override;
};

#endif // BLOCKWATER_HPP_