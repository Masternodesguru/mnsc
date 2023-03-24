// Copyright (c) 2019 The MNSAVINGS developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MNSAVINGS_PAIRRESULT_H
#define MNSAVINGS_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //MNSAVINGS_PAIRRESULT_H
