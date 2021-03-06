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
// A message containing an absolute position for an entity to move too.
//
//===----------------------------------------------------------------------===///

#ifndef _MOVE_MESSAGE_HPP_
#define _MOVE_MESSAGE_HPP_

namespace ec
{
  struct move_message
  {
    // members
    float X_Distance;
    float Y_Distance;
  };
}
#endif // _MOVE_MESSAGE_HPP_