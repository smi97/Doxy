/**
 \namespace wheel
 \brief This namespace defines all the classes related
 to wheel
 */

namespace wheel
{
    /**
     Tire season enum
     */

    enum Season
    {
        Summer, ///< Summer season
        Winter  ///< Winter season
    };

    /** \class Wheel
     \brief A wheel class
     */
    class Wheel
    {
    public:
        /**
         \brief the default constructor that takes no argument
         */
        Wheel() : _radius(19), _season(Season::Summer)
        {
        }

        /**
         \brief constructor that takes two arguments
         \param radius - wheel raduis
         \param season - wheel season
         */
        Wheel(float radius, Season season) :
        _radius(radius), _season(season)
        {
        }
        /**
         \brief the default destructor
         */
        ~Wheel()
        {
        }

    private:
        float _radius; ///< wheel raduis
        Season _season; ///< wheel season
    };



}
