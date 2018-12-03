#include "Block.hpp"

ostream &operator<<(ostream &out, const Block &block) {
    out << "Block: " + to_string(block._index) << endl;
    out << "       Hash: " << block._hash << endl;
    out << "   PrevHash: " << block.prevHash << endl;
    out << "       Data: " << block._data << endl;
    out << "      Nonce: " << block._nonce << endl;
    out << "       Time: " << block._time << endl << endl;
    return out;
};
