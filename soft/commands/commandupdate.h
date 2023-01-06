#pragma once

#include "../databasecolumn.h"
#include "command.h"

class commandUpdate : public Command
{
public:
    bool validateArgsCount(const std::vector<std::string>& args) const override;
    bool parseArgs(const std::vector<std::string>& args) override;
    void execute(DataBase* dataBase) const override;

private:
    DataBaseColumn column_;
};
