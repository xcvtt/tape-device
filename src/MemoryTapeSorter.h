//
// Created by asd on 13-Oct-23.
//

#ifndef TAPEROOT_MEMORYTAPESORTER_H
#define TAPEROOT_MEMORYTAPESORTER_H

#include "MemoryTape.h"
#include "TapeSorter.h"
#include <iostream>
#include <vector>
#include <algorithm>

class MemoryTapeSorter : public TapeSorter {
public:
    MemoryTapeSorter(
            const std::shared_ptr<MemoryTape>& in,
            const std::shared_ptr<MemoryTape>& out,
            const std::shared_ptr<TapeMergeAlgorithm>& mergeAlgorithm,
            size_t maxMemElements);

private:
    void WriteBuffer(std::vector<int>& buffer) override;

    std::shared_ptr<Tape> GetTmpTape() const override;

};

#endif //TAPEROOT_MEMORYTAPESORTER_H
