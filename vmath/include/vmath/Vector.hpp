class Vector {
public:
    constexpr explicit Vector() noexcept = default;
    constexpr explicit Vector(float x, float y, float z) : x(x), y(y), z(z) {}

    float x = 0.0f, y = 0.0f, z = 0.0f;

    inline constexpr Vector operator+(const Vector& other) const noexcept {
        return Vector(x + other.x, y + other.y, z + other.z);
    }

    inline constexpr Vector& operator+=(const Vector& other) noexcept {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector& v) {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }
};