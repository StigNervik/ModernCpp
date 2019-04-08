//
// Created by Stig Nervik on 2019-03-31.
//

#pragma once

#include <string>

namespace Data {

    class Unit {
    public:

        Unit();
        virtual ~Unit();

        const auto & name() const {return _name;}
        void setName(const std::string & name) {_name = name;}


    private:
        std::string _name = "";
        std::string _id = "";
    };
}
