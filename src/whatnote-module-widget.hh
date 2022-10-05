#pragma once

#include "skylights.hh"

struct whatnote_module_widget : ModuleWidget {
  
  whatnote_module_widget(Module *module);

  void draw(const DrawArgs &args) override;
};
