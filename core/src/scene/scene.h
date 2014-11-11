#pragma once

#include <vector>
#include <memory>

#include "style/style.h"

/* Singleton container of <Style> information
 *
 * Scene is a singleton containing the styles, lighting, and interactions defining a map scene 
 */
class Scene {

public:
    
    void addStyle(std::unique_ptr<Style> _style);

    std::vector<std::unique_ptr<Style>>& getStyles() { return m_styles; };

private:

    std::vector<std::unique_ptr<Style>> m_styles;

};
