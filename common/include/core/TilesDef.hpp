/*
 * =====================================================================================
 *
 *       Filename:  TilesDef.hpp
 *
 *    Description:
 *
 *        Created:  30/01/2020 16:37:29
 *
 *         Author:  Quentin Bazin, <quent42340@gmail.com>
 *
 * =====================================================================================
 */
#ifndef TILESDEF_HPP_
#define TILESDEF_HPP_

#include <string>
#include <vector>

#include <SFML/Network/Packet.hpp>

#include <gk/core/IntTypes.hpp>

#include "ISerializable.hpp"

enum BlockFace : u8 {
	Top    = 0,
	Bottom = 1,
	Left   = 2,
	Right  = 3,
	Front  = 4,
	Back   = 5
};

class TilesDef : public ISerializable {
	public:
		TilesDef() = default;
		TilesDef(const std::vector<std::string> &textureFilenames_)
			: textureFilenames(textureFilenames_) {}

		const std::string &getTextureForFace(u8 face) const;

		void serialize(sf::Packet &packet) override;
		void deserialize(sf::Packet &packet) override;

		std::vector<std::string> textureFilenames;
};

#endif // TILESDEF_HPP_
