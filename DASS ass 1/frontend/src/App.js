import { BrowserRouter, Routes, Route, Outlet } from "react-router-dom";
import "./App.css";


import UsersList from "./components/users/UsersList";
import Home from "./components/common/Home";
import Register from "./components/common/Register";
import Navbar from "./components/templates/Navbar";


// buyers
import Profile from "./components/common/profile";
import Wallet from "./components/common/wallet";

// common
import SignUp from "./components/common/SignUp";
import SignIn from "./components/common/SignIn";

// vendor
import ProfileV from "./components/common/profileV";
import FoodItemV from "./components/common/FoodItemV";


const Layout = () => {
  return (
    <div>
      <Navbar />
      <div className="container">
        <Outlet />
      </div>
    </div>
  );
};

function App() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<Layout />}>
          <Route path="/" element={<Home />} />
          <Route path="users" element={<UsersList />} />
          <Route path="register" element={<Register />} />

          {/* Buyer */}
          <Route path="profile" element={<Profile />} />
          <Route path="wallet" element={<Wallet />} />

          {/* Common */}
          <Route path="SignUp" element={<SignUp />} />
          <Route path="SignIn" element={<SignIn />} />

          {/* Vendor */}
          <Route path="profileV" element={<ProfileV />} />
          <Route path="foodItemV" element= {<FoodItemV/>} />
        </Route>
      </Routes>
    </BrowserRouter>
  );
}

export default App;
