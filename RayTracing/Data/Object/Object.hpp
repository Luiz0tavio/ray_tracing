//
// Created by luiz0tavio on 6/24/18.
//

#ifndef RAY_TRACING_OBJECT_HPP
#define RAY_TRACING_OBJECT_HPP

#include "../../Ray.hpp"
#include <vector>
#include <memory>

namespace RayTracing
{
    class Object
    {

        uint pigment_index_;
        uint finish_index_;

    protected:

        Object(uint pigment_index, uint finish_index) : pigment_index_(pigment_index), finish_index_(finish_index) {}

    public:

        virtual std::vector<glm::vec3> getIntersections(const std::shared_ptr<Ray>& ray)
        {
            return {};
        };

        virtual glm::vec3 getNormal(glm::vec3 point)
        {
            return {};
        }

        virtual void getUV(const glm::vec3& point, double& u, double& v) {}

        uint getPigmentIndex() const
        {
            return pigment_index_;
        }

        uint getFinishIndex() const
        {
            return finish_index_;
        }
    };
}



#endif //RAY_TRACING_OBJECT_HPP
