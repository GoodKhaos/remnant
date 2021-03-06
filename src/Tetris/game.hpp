//===-----------------------------------------------------------------------===//
//
//                     The Remnant Source code
//
// Authors:
//
//    Benjamin Adamson (adamson.benjamin@gmail.com)
//    Wesley Kos (kos.wesley@gmail.com)
//
//===----------------------------------------------------------------------===//
//
// The game related functions, including the main game loop exist here.
//
//===----------------------------------------------------------------------===///
#ifndef _GAME_HPP_
#define _GAME_HPP_
namespace tet
{
  //
  // forward declarations
  struct engine;

namespace game
{
  void game_loop(ec::engine &e);
}
  
}
#endif